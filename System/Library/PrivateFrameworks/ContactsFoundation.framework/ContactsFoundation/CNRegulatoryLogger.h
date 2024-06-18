@class NSString, PAApplication, CNAuditToken, PAAccessLogger, NSObject;
@protocol OS_os_log, OS_tcc_identity;

@interface CNRegulatoryLogger : NSObject <CNRegulatoryLogger>

@property (readonly, nonatomic) NSObject<OS_os_log> *os_log;
@property (readonly, nonatomic) struct ct_green_tea_logger_s { } *greenTeaLogger;
@property (readonly, nonatomic) BOOL isGreenTeaDiagnosticsEnabled;
@property (nonatomic) unsigned long long greenTeaDiagnosticLogFaultForEventCount;
@property (nonatomic) unsigned long long greenTeaDiagnosticEventCounter;
@property (retain, nonatomic) PAAccessLogger *privacyAccountingLogger;
@property (retain, nonatomic) PAApplication *privacyAccountingAccessor;
@property (readonly, nonatomic) CNAuditToken *cnAuditToken;
@property (readonly, nonatomic) NSObject<OS_tcc_identity> *assumedIdentity;
@property (readonly, nonatomic) BOOL isPrivacyAccountingDiagnosticsEnabled;
@property (retain, nonatomic) NSString *processDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstanceForAddressBook;

- (void)receivingContactsDataFromOOPContactPicker;
- (void)logContactsDataAccessEventWithAssetIdentifiers:(id)a0;
- (void)willLogContactsDataAccessEvent;
- (void)logPrivacyAccountingAccessEvent:(id)a0;
- (void)readAndTransmittingContactsData;
- (void)willLogContactsDataAccessEventWithAssetIdentifiers:(id)a0;
- (id)accessorForAuditTokenValidatingAssumedIdentity;
- (void)logContactPickerAccessEvent;
- (void)readingContactsData;
- (id)initWithAuditToken:(id)a0 assumedIdentity:(id)a1 logCategory:(const char *)a2;
- (id)initWithAuditToken:(id)a0 assumedIdentity:(id)a1;
- (void)willLogContactPickerAccessEvent;
- (void)deletingContactsData;
- (void).cxx_destruct;
- (id)privacyAccountingAccessorImpl;
- (void)displayingOOPContactPicker;
- (void)willNotLogContactPickerAccessEventAsLoggingDisabled;
- (void)logContactsDataAccessEvent;
- (void)dealloc;
- (void)willNotLogContactsDataAccessEventAsLoggingDisabled;
- (id)processDescriptionImpl;
- (void)logGreenTeaEvent:(id)a0;
- (void)willNotLogContactPickerAccessEventAsLoggingInProcess;
- (void)modifyingContactsData;

@end
