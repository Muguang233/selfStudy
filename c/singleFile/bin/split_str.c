#include <stdio.h>
#define MaxChar 100001
int OddPalindromicStr( int number, char* str ) {
  int sum = 0, common = 0;
  int tstr[number], commstr[number];
  int i, j;
  int id = 0, maxid = 0;
  for( i = 0; i < number; i++ ){
    tstr[i] = 0;
    commstr[i] = 0; 
  }
  for( i = 1; i < number; ++i){
    if( maxid > i){
      if( maxid - i < tstr[2*id-i] ){
        tstr[i] = maxid - i;
      }else{
        tstr[i] = tstr[2*id-i];
      } 
    }else{
      tstr[i] = 0; 
    }
    while( str[i-tstr[i]-1] == str[i+tstr[i]+1] 
    && ( i-tstr[i]-1 ) >= 0 && ( i+tstr[i]+1 ) < number){
      tstr[i]++;
    }
    if( maxid < i + tstr[i] ){
      maxid = i + tstr[i];
      id = i;
    }
  }
  for( i = 1; i < number; i++){
    if( tstr[i] == 0 ){
      continue;
    }else{
      id = i;
    }
    for( j = id+1; j < number; j++){
      common = 0;
      while( str[j+common+1] == str[id+common+1] 
      && common <= tstr[j] - 1 && common <= tstr[id] - 1
      && tstr[id+common+1] > 0 ){
        common++;
      }
      if( commstr[j] < common ){
        commstr[j] = common; 
      }
    }     
  } 
  for( i = number-1; i > 0; i--){ 
    for( j = i - 1; j > -1; j-- ){
      if( str[i] == str[j]){
        commstr[i]++;
        break;
      }
    }
  }
  common = 0;
  for( i = 0; i < number; i++){
    common += commstr[i]; 
    sum += tstr[i] + 1; 
  }
  sum = sum - common; 
  return sum;
} 
int PalindromicStr( int number, char* str, int bp ) {
  int result = 0;
  int i, j, k;
  int length = number - bp;
  char str2[length], dp[length+1];
  int last[length];
  if( length == 0 ){
    result = 1;
    return result;
  } 
  for( i = 0; i < length; i++ ){
    str2[i] = str[bp + i];
    dp[i] = 0; 
    last[i] = -1;
  }
  dp[length] = 0;
  for( i = length - 1; i >= 0; i-- ){
    for( j = i - 1; j >= 0; j-- ){
      if( str2[i] == str2[j] ){
        last[i] = j;
        break;
      }
    }
  } 
  dp[0] = 1;
  for( i = 0; i < length; i++ ){
    for( j = 1; j <= i+1; j++ ){ 
      if( last[i] != -1 && j <= last[i] + 1 ){
        for( k = 1; k < j; k++ ){
          if( str2[i-k] != str2[last[i]-k] ){
            dp[j]++;
            break;
          }
        } 
      }else{
        dp[j]++;
      }
    }
  } 
  for( i = 0; i < length; i++ ){
    result += dp[i];
  }
  result = result - OddPalindromicStr( length, str2 );
  return result;
}
int main() {
  int number, count, max = 0;
  char str[MaxChar];
  int i = 0;
  scanf( "%d%s", &number, str );
  for( i = 1; i < number+1; i++ ){
    count = OddPalindromicStr( i, str ); 
    count = count * PalindromicStr( number, str, i );
    if( max < count ){
      max = count;
    }
  }
  printf( "%d\n", max );
  return 0;
} 