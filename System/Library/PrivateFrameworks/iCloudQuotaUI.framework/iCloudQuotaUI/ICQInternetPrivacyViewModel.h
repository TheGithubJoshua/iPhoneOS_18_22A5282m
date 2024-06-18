@class NSString, NSArray, PrivacyProxyServiceStatus, NSData, NSNumber;

@interface ICQInternetPrivacyViewModel : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain, nonatomic) PrivacyProxyServiceStatus *proxyServiceStatus;
@property (nonatomic) unsigned long long proxyUserTier;
@property (nonatomic) unsigned long long proxyAccountType;
@property (nonatomic) unsigned long long status;
@property (nonatomic) BOOL isEnabled;
@property (retain, nonatomic) NSNumber *issueOrSuggestionCount;
@property (copy, nonatomic) NSString *statusStringForPrefPane;
@property (readonly, copy, nonatomic) NSString *navTitle;
@property (readonly, copy, nonatomic) NSString *switchTitle;
@property (readonly, copy, nonatomic) NSString *onTitle;
@property (readonly, copy, nonatomic) NSString *offTitle;
@property (readonly, copy, nonatomic) NSString *unavailableTitle;
@property (readonly, copy, nonatomic) NSString *notSupportedTitle;
@property (readonly, copy, nonatomic) NSString *learnMoreTitle;
@property (readonly, copy, nonatomic) NSString *learnMoreButtonTitle;
@property (readonly, copy, nonatomic) NSString *learnMoreLinkTitle;
@property (readonly, copy, nonatomic) NSString *upgradeTitle;
@property (readonly, copy, nonatomic) NSString *waitingTitle;
@property (readonly, copy, nonatomic) NSData *imageData;
@property (readonly, copy, nonatomic) NSString *explanationTitle;
@property (readonly, copy, nonatomic) NSString *explanationMessage;
@property (readonly, copy, nonatomic) NSString *explanationButtonTitle;
@property (readonly, copy, nonatomic) NSString *incompatibleSitesMessage;
@property (readonly, copy, nonatomic) NSString *IPAddressLocationTitle;
@property (readonly, copy, nonatomic) NSString *IPAddressLocationSettingsTitle;
@property (readonly, copy, nonatomic) NSString *IPAddressLocationEnabledTitle;
@property (readonly, copy, nonatomic) NSString *IPAddressLocationDisabledTitle;
@property (readonly, copy, nonatomic) NSString *IPAddressLocationSettingsMessage;
@property (readonly, copy, nonatomic) NSString *privateRelayPausedMessage;
@property (readonly, copy, nonatomic) NSString *privateRelayPausedTitle;
@property (readonly, copy, nonatomic) NSString *bannerMessageOnMac;
@property (readonly, copy, nonatomic) NSString *explanationPrefPaneMessage;
@property (readonly, copy, nonatomic) NSString *IPAddressLocationMacTitle;
@property (readonly, copy, nonatomic) NSString *porcupineOnTitle;
@property (readonly, copy, nonatomic) NSString *porcupineOffTitle;
@property (readonly, copy, nonatomic) NSString *porcupineUnavailableTitle;
@property (readonly, copy, nonatomic) NSString *porcupinePausedTitle;
@property (readonly, copy, nonatomic) NSString *turnOnPorcupineButtonTitle;
@property (readonly, copy, nonatomic) NSString *turnOffButtonTitle;
@property (readonly, copy, nonatomic) NSString *doneButtonTitle;
@property (readonly, copy, nonatomic) NSString *unsupportedTurnOffAlertTitle;
@property (readonly, copy, nonatomic) NSString *unsupportedTurnOffWifiAlertMessage;
@property (readonly, copy, nonatomic) NSString *unsupportedTurnOffCellularAlertMessage;
@property (readonly, copy, nonatomic) NSString *unsupportedTurnOffAlertOk;
@property (readonly, copy, nonatomic) NSString *unsupportedSwitchOffAlertTitle;
@property (readonly, copy, nonatomic) NSString *unsupportedWifiSwitchOffAlertMessage;
@property (readonly, copy, nonatomic) NSString *unsupportedCellularSwitchOffAlertMessage;
@property (readonly, copy, nonatomic) NSString *unsupportedSwitchOffNetworkOnly;
@property (readonly, copy, nonatomic) NSString *unsupportedSwitchOffProviderOnly;
@property (readonly, copy, nonatomic) NSString *unsupportedSwitchOffCompletely;
@property (readonly, copy, nonatomic) NSString *unsupportedSwitchOffCancel;
@property (readonly, copy, nonatomic) NSString *switchOffAlertTitle;
@property (readonly, copy, nonatomic) NSString *switchOffAlertPrefPaneTitle;
@property (readonly, copy, nonatomic) NSString *switchOffAlertMessage;
@property (readonly, copy, nonatomic) NSString *switchOffAlertPause;
@property (readonly, copy, nonatomic) NSString *switchOffAlertTurnOff;
@property (readonly, copy, nonatomic) NSString *switchOffAlertLearnMore;
@property (readonly, copy, nonatomic) NSString *turnOnSafariAlertTitle;
@property (readonly, copy, nonatomic) NSString *turnOnSafariAlertMessage;
@property (readonly, copy, nonatomic) NSString *turnOnDNSAlertTitle;
@property (readonly, copy, nonatomic) NSString *turnOnDNSAlertMessage;
@property (readonly, copy, nonatomic) NSString *internetPrivacyLearnMoreMessage;
@property (readonly, copy, nonatomic) NSArray *bannerModels;
@property (nonatomic) BOOL serviceIsLimited;
@property (readonly, nonatomic) NSString *proxyUserTierDescription;
@property (readonly, nonatomic) NSString *proxyAccountTypeDescription;
@property (readonly, nonatomic) NSString *statusDescription;
@property (copy, nonatomic) NSString *wiFiName;
@property (copy, nonatomic) NSString *cellularName;
@property (nonatomic, getter=isPaused) BOOL paused;

- (id)country;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)userTier;
- (void)pausePrivateRelayUntilTomorrow:(id /* block */)a0;
- (void)_addNetworkOutageBannerTo:(id)a0 withCompletion:(id /* block */)a1;
- (void)_fetchAccountTypeWithCompletion:(id /* block */)a0;
- (void)_fetchBannerModelsForPaidTier:(id /* block */)a0;
- (void)_fetchUserTierWithCompletion:(id /* block */)a0;
- (void)_refreshOverallStatusWithCompletion:(id /* block */)a0;
- (void)_refreshServiceStatusWithCompletion:(id /* block */)a0;
- (unsigned long long)_statusForSubscriber;
- (void)enableCellular:(BOOL)a0 onNetworkName:(id)a1 completion:(id /* block */)a2;
- (void)enableDNS:(id /* block */)a0;
- (void)enableLocationSharing:(BOOL)a0 completion:(id /* block */)a1;
- (void)enableSafari:(id /* block */)a0;
- (void)enableWifi:(BOOL)a0 onNetworkName:(id)a1 completion:(id /* block */)a2;
- (void)fetchBannerModels:(id /* block */)a0;
- (void)isLocationSharingEnabled:(id /* block */)a0;
- (id)issueTitle:(id)a0;
- (id)pausedPrivateRelayFooter;
- (void)setEnabled:(BOOL)a0 completion:(id /* block */)a1;
- (id)suggestionTitle:(id)a0;
- (id)unsupportedTurnOffAlertTitleFor:(id)a0;
- (id)unsupportedTurnOffCellularAlertTitle;
- (void)updateStatusStringForBannerModels:(id)a0;

@end