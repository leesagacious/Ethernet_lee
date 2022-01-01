#define MAX_GENER_QUEUES  4

struct gener_queue {
  struct gener_eth *geth;
};

struct gener_eth {
  struct gener_queue  queues[MAX_GENER_QUEUES];
};
