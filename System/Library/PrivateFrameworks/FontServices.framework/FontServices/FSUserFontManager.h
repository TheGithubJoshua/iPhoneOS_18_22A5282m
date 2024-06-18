@interface FSUserFontManager : NSObject

+ (void)synchronizeFontProviders;
+ (struct { unsigned int x0[8]; })auditToken;
+ (id)identifierFromDirectoryName:(id)a0;
+ (id)registeredFontsForIdentifier:(id)a0 enabled:(BOOL)a1;
+ (id)xpcInterface;
+ (id)fontProvidersSubscriptionSupportInfoAndFontFamiliesInstalled:(unsigned long long *)a0 andRemovedCount:(unsigned long long *)a1 andProfileFontsCount:(unsigned long long *)a2;
+ (id)_UserFontManagerConnection;
+ (void)_removeAllUserFonts;
+ (void)unregisterAndRemoveFontFilesForIdentifier:(id)a0 completionHandler:(id /* block */)a1;
+ (id)profileFontsInfo;
+ (void)deleteAppDialogWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
+ (id)directoryNameFromIdentifier:(id)a0;
+ (id)userFontsInfo;
+ (void)uninstallFonts:(id)a0 forIdentifier:(id)a1 appInfo:(id)a2 completionHandler:(id /* block */)a3;
+ (id)registeredFamiliesForIdentifier:(id)a0 enabled:(BOOL)a1;
+ (void)synchronizeProfileFonts:(id /* block */)a0;
+ (void)enableOrDisablePersistentURLs:(id)a0 enabled:(BOOL)a1;
+ (void)synchronizeFontAssets:(id /* block */)a0;
+ (id)suspendedFontProviders;
+ (void)reset;
+ (double)secondsSinceLastAccessed:(id)a0;
+ (void)suspendFontProvider:(id)a0;
+ (void)updateAppInfo:(id)a0 forIdentifier:(id)a1;
+ (id)resumeSuspendedFontFiles;
+ (id)registeredFontsInfoForIdentifier:(id)a0 enabled:(BOOL)a1 appInfo:(id)a2;
+ (id)knownFontProviders;
+ (void)installFonts:(id)a0 forIdentifier:(id)a1 enabled:(BOOL)a2 appInfo:(id)a3 completionHandler:(id /* block */)a4;

@end
