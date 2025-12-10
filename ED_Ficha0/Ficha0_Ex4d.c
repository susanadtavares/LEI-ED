void removeIndiv(Indiv *vet_ind, int n, int nCC) {
    int pos = -1;

    for (int i = 0; i < n; i++)
        if ((vet_ind+i)->nCC == nCC)
            pos = i;

    if (pos == -1) return;

    for (int i = pos; i < n - 1; i++)
        vet_ind[i] = vet_ind[i+1];
}

