@interface _LSDDeviceIdentifierClient : _LSDClient <_LSDDeviceIdentifierProtocol>

- (id)initWithXPCConnection:(id)a0;
- (void)clearIdentifiersForUninstallationWithVendorName:(id)a0 bundleIdentifier:(id)a1;
- (unsigned int)findAppBundleForExecutableURL:(id)a0 withContext:(struct LSContext { id x0; } *)a1;
- (BOOL)canAccessAdvertisingIdentifier;
- (void)getIdentifierOfType:(long long)a0 vendorName:(id)a1 bundleIdentifier:(id)a2 completionHandler:(id /* block */)a3;
- (void)getClientProcessVendorNameBundleIdentifierAndRestrictedIDAccessWithType:(long long)a0 completionHandler:(id /* block */)a1;
- (BOOL)hasUninstallEntitlement;
- (void)generateIdentifiersWithVendorName:(id)a0 bundleIdentifier:(id)a1;
- (void)getIdentifierOfType:(long long)a0 completionHandler:(id /* block */)a1;
- (void)clearAllIdentifiersOfType:(long long)a0;
- (BOOL)hasEntitlementToClearAllIdentifiersOfType:(long long)a0;

@end
