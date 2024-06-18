@class NSString;

@interface VCAccessSpecifier : NSObject <NSCopying>

@property (readonly, nonatomic) struct __SecTask { } *task;
@property (readonly, nonatomic) long long entitlements;
@property (readonly, nonatomic) long long sandboxCapabilities;
@property (readonly, copy, nonatomic) NSString *associatedAppBundleIdentifier;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;

+ (id)accessSpecifierForCurrentConnection;
+ (id)accessSpecifierForAuditToken:(struct { unsigned int x0[8]; })a0;
+ (void)initialize;
+ (id)accessSpecifierWithNoAccessForBundleIdentifier:(id)a0;
+ (id)accessSpecifierFilteredForAssociatedAppBundleIdentifier:(id)a0 bundleIdentifier:(id)a1;
+ (id)accessSpecifierForCurrentProcess;
+ (id)accessSpecifierUnrestricted;
+ (id)accessSpecifierWithNoAccess;
+ (id)accessSpecifierUnrestrictedWithAssociatedAppBundleIdentifier:(id)a0 bundleIdentifier:(id)a1;
+ (id)accessSpecifierForXPCConnection:(id)a0;
+ (id)accessSpecifierForTask:(struct __SecTask { } *)a0 sandboxCapabilities:(long long)a1;

- (BOOL)hasEntitlements:(long long)a0;
- (id)init;
- (BOOL)allowReadAccessToPodcastsDatabase;
- (BOOL)allowLaunchingBackgroundShortcutRunner;
- (BOOL)allowWriteAccessToSuggestionsWithBundleIdentifier:(id)a0;
- (BOOL)allowReadAccessToSingleStepShortcutsWithBundleIdentifier:(id)a0;
- (BOOL)allowHomeResidentShortcutRunning;
- (BOOL)allowRootlessShortcutStorageAccess;
- (BOOL)allowConnection;
- (BOOL)allowReadAccessForDonations;
- (BOOL)allowReadAccessToShortcutsLibrary;
- (BOOL)allowWriteAccessToVoiceShortcuts;
- (BOOL)allowShortcutImport;
- (BOOL)allowReadAccessForTriggers;
- (BOOL)isSettingsApp;
- (id)associatedAppBundleIdentifierFromBundleRecord;
- (BOOL)isRemovalService;
- (BOOL)allowReadAccessToSuggestionsWithBundleIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (BOOL)allowRunningTestHarnessTests;
- (BOOL)allowReadingOnScreenContent;
- (BOOL)allowReadAccessForContextualActions;
- (BOOL)allowReadAccessForSleepWorkflows;
- (id)initWithSecTask:(struct __SecTask { } *)a0 bundleIdentifier:(id)a1 associatedAppBundleIdentifier:(id)a2 entitlements:(long long)a3 sandboxCapabilities:(long long)a4;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)bundleIdentifierFromTask;
- (BOOL)hasSandboxCapabilities:(long long)a0;
- (BOOL)allowBackgroundShortcutRunning;
- (void)dealloc;
- (BOOL)isSpringBoard;
- (BOOL)allowResettingAutomationConfirmationLevel;
- (BOOL)allowWriteAccessForTriggers;
- (BOOL)allowWriteAccessForSleepWorkflows;
- (BOOL)allowUnrestrictedAccess;
- (BOOL)allowIntentsExtensionDiscovery;

@end
