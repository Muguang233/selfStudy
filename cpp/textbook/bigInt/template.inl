template<size_t N>
Integer<N>::Integer(const std::string& _Data, const bool& _Symbol): Symbol(_Symbol) {
  for (long long int i = _Data.length() - 1; i >= 0; i--)
    if (Data.size() != 0 || _Data[i] != ' ')
      Data.push_back((size_t)_Data[i] - '0');
  if (Data.empty()) Symbol = true, Data.push_back(0);
}

template<size_t N>
Integer<N>::Integer(const long long int& _Data): Symbol(_Data >= 0) {
  long long int temp = std::abs(_Data);
  do
    Data.push_back(temp % N), temp /= N;
  while (temp);
}

template<size_t N>
Integer<N>::Integer(const std::vector<size_t>& _Data, const bool& _Symbol): Symbol(_Symbol), Data(_Data) {
  while (!Data.empty() && Data.back() == 0) Data.pop_back();
	if (Data.empty()) Symbol = true, Data.push_back(0);
}

template<size_t N>
template<typename _RanIt> Integer<N>::Integer(const _RanIt _First, const _RanIt _Last, const bool& _Symbol)
		: Symbol(_Symbol), Data(_First, _Last) {
  while (!Data.empty() && Data.back() == 0) Data.pop_back();
  if (Data.empty()) Symbol = true, Data.push_back(0);
}

template<size_t N>
Integer<N>& Integer<N>::append(const std::vector<size_t>& _Data)
{
  Data.insert(Data.begin(), _Data.begin(), _Data.end());
  return *this;
}
template<size_t N>
Integer<N> Integer<N>::operator++(int)
	{
		Integer temp(*this);
		*this += 1;
		return temp;
	}
template<size_t N>
Integer<N> Integer<N>::operator--(int)
{
  Integer temp(*this);
  *this -= 1;
  return temp;
}
template<size_t N>
template<size_t M>
Integer<N> Integer<N>::changeSystem(const Integer<M>& _Integer) {
		if (N == M) return  Integer<N>(_Integer.Data, _Integer.Symbol);
		else {
			std::vector<size_t> temp(_Integer.Data);
			std::vector<size_t> Data;
			size_t len = _Integer.Data.size();
			for (size_t i = 0; i < len; )
			{
				for (size_t j = i; j < len - 1; j++)
				{
					temp[len - j - 2] += temp[len - j - 1] % N * M;
					temp[len - j - 1] /= N;
				}
				Data.push_back(temp[0] % N);
				temp[0] /= N;
				while (i < len && !temp[len - i - 1]) i++;
			}
			return Integer<N>(Data, _Integer.Symbol);
		}
	}
template <size_t N>
template <size_t M>
bool Integer<N>::operator==(const Integer<M>& other) const {
    if (Symbol != other.Symbol)
        return false;
    Integer<N> converted = converted.changeSystem(other);
    return Data == converted.Data;
}


template <size_t N>
template <size_t M>
bool Integer<N>::operator<(const Integer<M>& _Integer) const
{
  Integer<N> converted = Integer::changeSystem(_Integer);
  if (Symbol != _Integer.Symbol) return Symbol < _Integer.Symbol;
  else if (N <= M && Data.size() < _Integer.Data.size())
    return Symbol;
  else if (N >= M && Data.size() > _Integer.Data.size())
    return !Symbol;
  else if (N != M) {
    return *this < converted;
  } else {
    if (Data.size() != converted.Data.size()) return !(Symbol ^ (Data.size() < converted.Data.size()));
    for (long long int i = Data.size() - 1; i >= 0; i--)
      if (Data[i] != converted.Data[i])
        return !(Symbol ^ (Data[i] < converted.Data[i]));
  }
  return false;
}
template <size_t N>
template <size_t M>
bool Integer<N>::operator>(const Integer<M>& _Integer) const {
  Integer<N> converted = converted.changeSystem(_Integer);
  if (Symbol != _Integer.Symbol) return Symbol > _Integer.Symbol;
  else if (N <= M && Data.size() < _Integer.Data.size())
    return !Symbol;
  else if (N >= M && Data.size() > _Integer.Data.size())
    return Symbol;
  else if (N != M) return *this > converted;
  else {
    if (Data.size() != converted.Data.size()) return !(Symbol ^ (Data.size() > converted.Data.size()));
    for (long long int i = Data.size() - 1; i >= 0; i--)
      if (Data[i] != converted.Data[i])
        return !(Symbol ^ (Data[i] > converted.Data[i]));
  }
  return false;
}

/**/
template <size_t N, size_t M>
Integer<N> operator+(const Integer<N>& _IntegerA, const Integer<M>& _IntegerB) {
  Integer<N> converted = converted.changeSystem(_IntegerB);
  if (_IntegerA.Symbol != converted.Symbol){
    return _IntegerA - ~converted;
  } 
  else if (N != M) {
    return _IntegerA + converted;
  } else if (_IntegerA.Data.size() > converted.Data.size()) {
    return converted + _IntegerA;
  }
  size_t temp = 0;
  std::vector<size_t> Data;
  for (size_t i = 0; i < converted.Data.size() || temp; i++)
    if (i < _IntegerA.Data.size()) {
      Data.push_back((temp + _IntegerA.Data[i] + converted.Data[i]) % N);
      temp = (temp + _IntegerA.Data[i] + converted.Data[i]) / N;
    }
    else if (i < converted.Data.size()) {
      Data.push_back((temp + converted.Data[i]) % N);
      temp = (temp + converted.Data[i]) / N;
    }
    else {
      Data.push_back(temp % N);
      temp = temp / N;
    }
  return Integer<N>(Data, _IntegerA.Symbol);
}


template <size_t N, size_t M>
Integer<N> operator-(const Integer<N>& _IntegerA, const Integer<M>& _IntegerB) {
  Integer<N> converted = converted.changeSystem(_IntegerB);
  if (_IntegerA.Symbol != converted.Symbol) {
    return _IntegerA + ~converted;
  } 
  else if (N != M)  {
    return _IntegerA - converted;
  } 
  std::vector<size_t> Data;
  bool temp = false;
  for (size_t i = 0; i < _IntegerA.Data.size() || i < converted.Data.size(); i++)
    if (i < _IntegerA.Data.size() && i < converted.Data.size()) {
      Data.push_back((_IntegerA.Data[i] - temp - converted.Data[i] + N) % N);
      temp = _IntegerA.Data[i]< converted.Data[i]+temp;
    }
    else if (i < _IntegerA.Data.size()) {
      Data.push_back((_IntegerA.Data[i] - temp + N) % N);
      temp = _IntegerA.Data[i] == 0 && temp;
    }
    else if (i < converted.Data.size()) {
      Data.push_back((N - converted.Data[i] - temp) % N);
      temp = 0 < converted.Data[i] + temp;
    }
  if (temp) {
    bool _temp = temp = false;
    for (int i = 0; i < Data.size(); i++) {
      _temp = temp;
      temp = 0 < Data[i] + _temp;
      Data[i] = (N - Data[i] - _temp) % N;
    }
  }
  return Integer<N>(Data, _IntegerA.Symbol ^ temp);
}
template <size_t N, size_t M>
Integer<N> operator*(const Integer<N>& _IntegerA, const Integer<M>& _IntegerB) {
  Integer<N> converted = converted.changeSystem(_IntegerB);
  if (N != M) {
			return _IntegerA * converted;
		} else if (_IntegerA.Data.size() < 2 || converted.Data.size() < 2) {
			std::vector<size_t> Data;
			size_t temp = 0;
			for (size_t i = 0; i < _IntegerA.Data.size(); i++)
				for (size_t j = 0; j < converted.Data.size(); j++)
					if (Data.size() < i + j + 1)
						Data.push_back(_IntegerA.Data[i] * converted.Data[j]);
					else
						Data[i + j] += _IntegerA.Data[i] * converted.Data[j];
			for (size_t i = 0; i < Data.size(); i++) {
				temp += Data[i];
				Data[i] = temp % N;
				temp /= N;
			}
			if (temp) Data.push_back(temp);
			return Integer<N>(Data, !(_IntegerA.Symbol ^ converted.Symbol));
		}
		else if (_IntegerA.Data.size() < converted.Data.size()) {
			return converted * _IntegerA;
		} 
		size_t halfN = (_IntegerA.Data.size() + 1) / 2;
		std::vector<size_t>  A(_IntegerA.Data.begin(), _IntegerA.Data.begin() + halfN);
    Integer<N> C(A);
		std::vector<size_t>  _A(_IntegerA.Data.begin() + halfN, _IntegerA.Data.end());
    Integer<N> _C(_A);
		std::vector<size_t>  B(converted.Data.begin(), converted.Data.begin() + halfN);
    Integer<N> D(B);
		std::vector<size_t>  _B(converted.Data.begin() + halfN, converted.Data.end());
    Integer<N> _D(_B);
		return Integer<N>(C * D + (_C * _D).append(std::vector<size_t>(A.size() * 2)) + (C * _D + _C * D).append(std::vector<size_t>(A.size())), !(_IntegerA.Symbol ^ _IntegerB.Symbol));
}


template <size_t N, size_t M>
Integer<N> operator/(const Integer<N>& _IntegerA, const Integer<M>& _IntegerB) {
  Integer<N> converted = converted.changeSystem(_IntegerB);
  if (N != M) {
    return _IntegerA / converted;
  } else {
    Integer<N> A = _IntegerA.abs(), B = converted.abs(), result(0);
    while (B <= A) A -= B, result++;
    return result;
  }
}

template <size_t N, size_t M>
Integer<N> operator%(const Integer<N>& _IntegerA, const Integer<M>& _IntegerB) {
  Integer<N> converted = converted.changeSystem(_IntegerB);
  if (_IntegerA.abs() < converted.abs()) {
    return _IntegerA;
  } else if (_IntegerA.abs() == converted.abs()) {
    return 0;
  } else if (converted == Integer<N>(N)) {
    return *_IntegerA.Data.begin();
  } else if (N != M) {
    return _IntegerA % converted;
  } else {
    return _IntegerA - _IntegerA / converted * converted;
  }
}