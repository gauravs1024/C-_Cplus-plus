int i,j,t,p,k,mid,pivot,temp,first,last;
void bsort(int a[],int n) // 1.bubble sort 
{
for(i=0;i<n-1;i++)
{
for(j=0;j<n-i-1;j++)
{if(a[j]>a[j+1])
{t=a[j];
a[j]=a[j+1];
a[j+1]=t;}
}}
}
void isort(int a[],int n)  // 2.insertion sort
{for(i=1;i<n;i++)
{t=a[i];
j=i-1;
while((t<a[j])&&(j>=0))
{a[j+1]=a[j];
j--;
}
a[j+1]=t;
}}
int smallest(int a[],int k,int n)  // to find smallest value for selection sort
{
int small=a[k];
for(i=k+1;i<n;i++)
{if(a[i]<small)
{small=a[i];
p=i;}
}
return p;
}
void selsort(int a[],int n)    //3.selection sort
{int k;
for(k=0;k<n;k++)
{p=smallest(a,k,n);
t=a[k];
a[k]=a[p];
a[p]=t;
}
}
//swap for quick sort
void swap(int *a,int *b)
{int t=*a;
*a=*b;
*b=t;
}
//partition for quick sort
int partition(int a[],int low,int high)
{int pivot=a[high];
int i=(low-1);
for(int j=low;j<=high-1;j++){
if(a[j]<pivot)
{i++;
swap(&a[i],&a[j]);
}
}
swap(&a[i+1],&a[high]);
return (i+1);
}
// 4.quick sort or partition sort
void quicksort(int a[],int low,int high)
{if(low<high){
	int pi=partition(a,low,high);
	quicksort(a,low,pi-1);
	quicksort(a,pi+1,high);
}
}
// 5.shell sort
int shellsort(int a[],int n)
{
for(int gap=n/2;gap>0;gap/=2)
{for(int i=gap;i<n;i+=1)
{int temp=a[i];
int j;
for(j=i;j>=gap&&a[j-gap]>temp;j-=gap)
a[j]=a[j-gap];
a[j]=temp;
}
}
return 0;
}
// to get maximum value
int getmax(int a[],int n)
{int mx=a[0];
for(int i=1;i<n;i++)
mx=a[i];
return mx;
}
void countsort(int a[],int n,int exp)
{int output[n];
int i,count[10]={0};
for(i=0;i<n;i++)
count[ (a[i]/exp%10) ]++;
for(i=1;i<10;i++)
count[i]+=count[i-1];
for(i=n-1;i>=0;i--)
{output[count[ (a[i]/exp)%10 ]-1]=a[i];
count[(a[i]/exp)%10]--;
}
for(i=0;i<n;i++)
a[i]=output[i];
}
// 6.radix sort
void radixsort(int a[],int n)
{int m=getmax(a,n);
for(int exp=1;m/exp>0;exp*=10)
countsort(a,n,exp);
}


void heapify(int arr[], int N, int i)
{
    // Find largest among root, left child and right child
 
    // Initialize largest as root
    int largest = i;
 
    // left = 2*i + 1
    int left = 2 * i + 1;
 
    // right = 2*i + 2
    int right = 2 * i + 2;
 
    // If left child is larger than root
    if (left < N && arr[left] > arr[largest])
 
        largest = left;
 
    // If right child is larger than largest
    // so far
    if (right < N && arr[right] > arr[largest])
 
        largest = right;
 
    // Swap and continue heapifying if root is not largest
    // If largest is not root
    if (largest != i) {
 
        swap(&arr[i], &arr[largest]);
 
        // Recursively heapify the affected
        // sub-tree
        heapify(arr, N, largest);
    }
}
 
// Main function to do heap sort
void heapsort(int arr[], int N)
{
 
    // Build max heap
    for (int i = N / 2 - 1; i >= 0; i--)
 
        heapify(arr, N, i);
 
    // Heap sort
    for (int i = N - 1; i >= 0; i--) {
 
        swap(&arr[0], &arr[i]);
 
        // Heapify root element to get highest element at
        // root again
        heapify(arr, i, 0);
    }
}
void delay(int t)//DELAY FUNCTION
{for(int i=1;i<=t*100;i++)
for(int j=1;j<=t*200;j++)
{}
}
//
/*
//for string sorting
void bsortc(char a[],int n) // 1.bubble sort 
{
for(i=0;i<n-1;i++)
{
for(j=0;j<n-i-1;j++)
{if(a[j]>a[j+1])
{t=a[j];
a[j]=a[j+1];
a[j+1]=t;}
}}
}

void isortc(char a[],int n)  // 2.insertion sort
{for(i=1;i<n;i++)
{t=a[i];
j=i-1;
while((t<a[j])&&(j>=0))
{a[j+1]=a[j];
j--;
}
a[j+1]=t;
}}


int shellsortc(char a[],int n)
{
for(int gap=n/2;gap>0;gap/=2)
{for(int i=gap;i<n;i+=1)
{char temp=a[i];
int j;
for(j=i;j>=gap&&a[j-gap]>temp;j-=gap)
a[j]=a[j-gap];
a[j]=temp;
}
}
}
*/

// COUNTING SORT
 void countingsort(int Array[], int n) {
  int max = 0;
  //find largest element in the Array
  for (int i=0; i<n; i++) {  
    if(max < Array[i]) {
      max = Array[i];
    } 
  }

  //Create a freq array to store number of occurrences of 
  //each unique elements in the given array 
  int freq[max+1] ;
  for (int i=0; i<max+1; i++) {  
    freq[i] = 0;
  } 

  for (int i=0; i<n; i++) {  
    freq[Array[i]]++;
  } 
  
  //sort the given array using freq array
  for (int i=0, j=0; i<=max; i++) {  
    while(freq[i]>0) {
      Array[j] = i;
      j++;
      freq[i]--;
    }
  } 
}
//9.bucketsort
void bucketsort(int a[], int n) {
	int i, j;
	int count[n];
	for (i=0; i < n; i++) {
		count[i] = 0;
	}
	for (i=0; i < n; i++) {
		(count[a[i]])++;
	}
	for (i=0,j=0; i < n; i++) {
		for (; count[i]>0;(count[i])--) {
			a[j++] = i;
		}
	}
}
// MERGE FUNCTION FOR MERGE SORT
void merge(int arra[], int l, int m, int r) 
  { 
  int i, j, k; 
  int n1 = m - l + 1; 
  int n2 = r - m; 
  /* create temp arrays */ 
  int L[n1], R[n2]; 
  /* Copy data to temp arrays L[] and R[] */ 
  for(i = 0; i < n1; i++) 
  L[i] = arra[l + i]; 
  for(j = 0; j < n2; j++) 
  R[j] = arra[m + 1+ j]; 
  i = 0; 
  j = 0; 
  k = l; 
  while (i < n1 && j < n2) 
  { 
  if (L[i] <= R[j]) 
  { 
  arra[k] = L[i]; 
  i++; 
  } 
  else 
  { 
  arra[k] = R[j]; 
  j++; 
  } 
  k++; 
  } 
  while (i < n1) 
  { 
  arra[k] = L[i]; 
  i++; 
  k++; 
  } 
  while (j < n2) 
  { 
  arra[k] = R[j]; 
  j++; 
  k++; 
  } 
  } 
  //10 .merge sort
 void mergesort(int arra[],int l,int r) 
  { 
  if (l < r) 
  { 
  int m = l+(r-l)/2; //Same as (l+r)/2, but avoids overflow for large l and h 
  mergesort(arra, l, m); 
  mergesort(arra, m+1, r); 
  merge(arra, l, m, r); 
  } 
  } 
 

