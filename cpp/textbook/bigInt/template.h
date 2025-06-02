#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
template<size_t N>
class Integer {
  private:
    bool Symbol;
		std::vector<size_t> Data;
    template <size_t M> friend class Integer;
  public:
    Integer(const std::string& _Data, const bool& _Symbol = true);
		Integer(const long long int& _Data = 0);
		Integer(const std::vector<size_t>& _Data, const bool& _Symbol = true);
		template<size_t M>
		Integer(const Integer<M>& _Integer) { *this = (*this).changeSystem(_Integer); }
		Integer abs()const { return Integer(Data); }
    operator std::vector<size_t>()const { return Data; }
		Integer& append(const std::vector<size_t>& _Data);
		size_t operator[](const size_t& pos)const { return Data[Data.size() - pos - 1]; }
		size_t& operator[](const size_t& pos) { return Data[Data.size() - pos - 1]; }
		Integer operator~()const { return Integer(*this, !Symbol); }
		Integer& operator~() { Symbol = !Symbol; return *this; }
		Integer& operator+=(const Integer& _Integer) { return *this = *this + _Integer; }
		Integer& operator-=(const Integer& _Integer) { return *this = *this - _Integer; }
		Integer& operator*=(const Integer& _Integer) { return *this = *this * _Integer; }
		Integer& operator/=(const Integer& _Integer) { return *this = *this / _Integer; }
		Integer& operator%=(const Integer& _Integer) { return *this = *this % _Integer; }
		Integer& operator++() { return *this += 1; }
		Integer& operator--() { return *this -= 1; }
		Integer operator++(int);
		Integer operator--(int);
    template<size_t M>
		bool operator==(const Integer<M>& other) const ;
    template<size_t M>
		bool operator<(const Integer<M>& _Integer)const;
    template<size_t M>
		bool operator>(const Integer<M>& _Integer)const;
		bool operator!=(const Integer& _Integer)const { return !(*this == _Integer); }
		bool operator<=(const Integer& _Integer)const { return !(*this > _Integer); }
		bool operator>=(const Integer& _Integer)const { return !(*this < _Integer); }
    
    template<size_t M>
		static Integer changeSystem(const Integer<M>& _Integer);
		template <size_t A, size_t B>
    friend Integer<A> operator+(const Integer<A>& _IntegerA, const Integer<B>& _IntegerB);
		template <size_t A, size_t B>
		friend Integer<A> operator-(const Integer<A>& _IntegerA, const Integer<B>& _IntegerB);
		template <size_t A, size_t B>
		friend Integer<A> operator*(const Integer<A>& _IntegerA, const Integer<B>& _IntegerB);
		template <size_t A, size_t B>
		friend Integer<A> operator/(const Integer<A>& _IntegerA, const Integer<B>& _IntegerB);
		template <size_t A, size_t B>
		friend Integer<A> operator%(const Integer<A>& _IntegerA, const Integer<B>& _IntegerB);

		template<typename _RanIt>
		Integer(const _RanIt _First, const _RanIt _Last, const bool& _Symbol);
    
		friend std::ostream& operator<<(std::ostream& os, const Integer& _Integer) {
      if (!_Integer.Symbol) os << '-';
      if (N <= 10)
        for (long long int i = _Integer.Data.size() - 1; i >= 0; i--)
          os << _Integer.Data[i];
      else
        for (long long int i = _Integer.Data.size() - 1; i >= 0; i--)
          os << _Integer.Data[i] << ' ';
      if (_Integer.Data.empty()) os << 0;
      return os;
    }
};  
#include "template.inl"