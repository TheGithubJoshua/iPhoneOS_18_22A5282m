@interface SSPrivacyController : NSObject

+ (id)appStorePrivacyIdentifiers;
+ (unsigned long long)_currentPrivacyContentVersionForIdentifier:(id)a0;
+ (void)_appendPrivacyAcknowledgementToLocalAccount:(id)a0;
+ (void)syncPrivacyAcknowledgementOnAccount:(id)a0 URL:(id)a1;
+ (id)_syncPrivacyAcknowledgementOnAccount:(id)a0 URL:(id)a1;
+ (id)storePrivacyIdentifiers;
+ (id)_translateIdentifierToPrivacyAcknowledgement:(id)a0 withVersion:(unsigned long long)a1;
+ (void)acknowledgePrivacyLinkWithIdentifier:(id)a0;
+ (id)_appendPrivacyAcknowledgementToActiveAccount:(id)a0 withURL:(id)a1;
+ (id)viewControllerForPrivacySplashWithIdentifier:(id)a0 URL:(id)a1;
+ (BOOL)shouldDisplayPrivacyLinkWithIdentifier:(id)a0;
+ (void)_appendPrivacyAcknowledgement:(id)a0 toAccount:(id)a1;
+ (void)acknowledgePrivacyLinkWithIdentifier:(id)a0 URL:(id)a1;

@end
