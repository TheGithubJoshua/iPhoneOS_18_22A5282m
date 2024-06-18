@interface SBSplashBoardController : XBApplicationController {
    BOOL _isObservingAppLanguageChanges;
}

- (void)_handleLocaleDidChangeNotification;
- (void)_observeLocaleChanges;
- (void)_checkForChangedLocale;
- (id)_splashBoardApplicationForBundleID:(id)a0;
- (void)dealloc;
- (void)configureForLocaleChanges;

@end
