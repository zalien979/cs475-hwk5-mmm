#ifndef MMM_H_
#define MMM_H_

void mmm_init();
void mmm_reset(double **matrix);
void mmm_freeup();
void mmm_seq();
void *mmm_par(void *args);
double mmm_verify();

#endif /* MMM_H_ */
