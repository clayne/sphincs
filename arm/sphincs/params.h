#define SUBTREE_HEIGHT 5
#define TOTALTREE_HEIGHT 60
#define N_LEVELS (TOTALTREE_HEIGHT/SUBTREE_HEIGHT)
#define SEED_BYTES 32
#define WOTS_LOGW 4

#define SK_RAND_SEED_BYTES 32
#define MESSAGE_HASH_SEED_BYTES 32

#define HORST_LOGT 16
#define HORST_T (1<<HORST_LOGT)
#define HORST_K 32
#define HORST_SKBYTES 32
#define HORST_SIGBYTES (64*HASH_BYTES+(((HORST_LOGT-6)*HASH_BYTES)+HORST_SKBYTES)*HORST_K)

#define WOTS_W (1 << WOTS_LOGW)
#define WOTS_L1 ((256+WOTS_LOGW-1)/WOTS_LOGW)
//#define WOTS_L 133  // for WOTS_W == 4
//#define WOTS_L 90  // for WOTS_W == 8
#define WOTS_L 67  // for WOTS_W == 16
#define WOTS_LOG_L 7  // for WOTS_W == 16
#define WOTS_SIGBYTES (WOTS_L*HASH_BYTES)

#define HASH_BYTES 32 // Has to be log(HORST_T)*HORST_K/8
#define MSGHASH_BYTES 64

#define N_MASKS (2*(HORST_LOGT)) /* has to be the max of  (2*(SUBTREE_HEIGHT+WOTS_LOGL)) and (WOTS_W-1) and 2*HORST_LOGT */
