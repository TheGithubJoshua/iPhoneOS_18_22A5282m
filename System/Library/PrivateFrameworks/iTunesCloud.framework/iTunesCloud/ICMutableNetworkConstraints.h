@interface ICMutableNetworkConstraints : ICNetworkConstraints

- (void)setShouldAllowDataForCellularNetworkTypes:(BOOL)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)setShouldAllowData:(BOOL)a0 forNetworkType:(long long)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setShouldAllowDataForWiFiNetworkTypes:(BOOL)a0;
- (void)setSizeLimit:(id)a0 forNetworkType:(long long)a1;
- (void)setShouldAllowDataForAllNetworkTypes:(BOOL)a0;

@end
