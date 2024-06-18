@interface WRMBasebandMetricsInterface : WRMClientInterface {
    id /* block */ metricsHandler;
    id /* block */ dataMetricsHandler;
    id /* block */ wifiMetricsHandler;
}

- (void)processWRMWiFiBWEstMetrics:(id)a0;
- (id)init;
- (void)getNRPhyMetrics:(id /* block */)a0;
- (void)getCellularDataMetrics:(id /* block */)a0;
- (void)getWiFiBWEstimationMetrics:(id /* block */)a0;
- (void)reConnect;
- (void)processWRMCellDataMetrics:(id)a0;
- (void).cxx_destruct;
- (void)registerClient:(int)a0 queue:(id)a1;
- (void)processWRMNrPhyMetrics:(id)a0;
- (void)handleNotification:(id)a0 :(BOOL)a1;
- (void)getQSHMetrics:(id /* block */)a0;
- (void)unregisterClient;

@end
