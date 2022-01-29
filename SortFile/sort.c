void swap(int *a, int *b){
  int tmp = *a;
  *a = *b;
  *b = tmp;
}

//O(n^2),S(1)
void SelectionSort(int a[], int size){

  int i, j;
  int indexMin;

  for (j = 0; j < size; j++){

    indexMin = j;

    for (i = j + 1; i < size; i++){
      if (a[indexMin] > a[i]){
        indexMin = i;
      }
    }

    if (j != indexMin){
      swap(&a[j], &a[indexMin]);
    }
  }
}

//O(n^2), S(1)  --> лучший случай O(n)
void InsertionSort(int a[], int size){
  int i, j, tmp;

  for (i = 1; i < size; i++){

    tmp = a[i];

    for (j = i - 1; j >= 0 && tmp < a[j]; --j){
      a[j + 1] = a[j];
    }
    
    a[j + 1] = tmp;
  }
}

//O(n^2), S(1)
void BubbleSort(int a[], int size){
  int i, j;
  for (i = 0; i < size; i++){
    for (j = size - 1; j > i; j--){
      if (a[j] < a[j - 1]){
        swap(&a[j], &a[j-1]);
      }
    }
  }
}

void CoctailSort(int a[], int size){
  int ls = 0, rs = size - 1;
  int i, j;

  for (i = 0; ls < rs; i++){

      for (j = rs; j > ls; j--){
        if (a[j] < a[j - 1]){
          swap(&a[j], &a[j-1]);
        }
      }
    
    ls += 1;

    for (j = ls; j < rs; j++){
      if (a[j] > a[j + 1]){
        swap(&a[j], &a[j + 1]);
      }
    }
    
    rs -= 1;
  }
}

void ShellSort(int a[], int size){
  int i, j, tmp, interval = size / 2;

  while (interval > 0){
    for (i = interval; i < size; i++){
      tmp = a[i];
      for (j = i - interval; j >= 0 && tmp < a[j]; j -= interval){
        a[j + interval] = a[j];
      }
      a[j + interval] = tmp;
    }
    interval /= 2;
  }
}

void CombSort(int a[], int size){
  int i, j;
  int interval = size / 1.247;
  int isSwapped = 0;

  while (interval > 1 || isSwapped){
    isSwapped = 0;
    for (j = 0; j < size && j + interval < size; j += interval){
      if (a[j] > a[j + interval]){
        swap(&a[j], &a[j + interval]);
        isSwapped = 1;
      }
    }
    if (interval > 1){
      interval /= 1.247;
    }
  }
}




