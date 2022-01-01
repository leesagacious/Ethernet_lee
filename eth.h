#include <linux/netdevice.h>

#define MAX_GENER_QUEUES  4

struct gener_queue {
  struct gener_eth *geth;
  struct napi_struct napi;
};

struct gener_eth {
  unsigned int mask;
  unsigned int num_queues;
  struct gener_queue  queues[MAX_GENER_QUEUES];
};
