#include "eth.h"

static int eth_init(struct platform_device *pdev)
{
	unsigned int i;
       /*
        * 获取net_device 结构. 其中的一个目的是要根据它获取mac.
	* 因为mac 存在于它空间的私有数据中了.
	*/
	struct net_device *ndev = platform_get_drvdata(pdev);
	struct gener_eth *g_eth = netdev_priv(ndev);
	
	for (i = 0; i < MAX_GENER_QUEUES; i++) {
		
	}
}

static int eth_probe(struct platform_device *pdev)
{

	return 0;
}
