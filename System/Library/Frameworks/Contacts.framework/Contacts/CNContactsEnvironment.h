@class CNiOSABPredicateRunner, NSArray, CNiOSAddressBook, NSURL;
@protocol CNContactsLoggerProvider, CNSiriIntelligenceSettingsProtocol, SGSuggestionsServiceContactsProtocol, CNSchedulerProvider;

@interface CNContactsEnvironment : NSObject <NSCopying> {
    CNiOSAddressBook *_addressBook;
}

@property (retain, nonatomic) NSArray *delegateInfos;
@property (retain, nonatomic) CNiOSABPredicateRunner *abPredicateRunner;
@property (readonly, nonatomic) id<CNSchedulerProvider> schedulerProvider;
@property (readonly, nonatomic) id<CNContactsLoggerProvider> loggerProvider;
@property (readonly, nonatomic) CNiOSAddressBook *addressBook;
@property (copy, nonatomic) NSURL *baseURL;
@property (retain, nonatomic) id<SGSuggestionsServiceContactsProtocol> suggestionsService;
@property (retain, nonatomic) id<CNSiriIntelligenceSettingsProtocol> siriIntelligenceSettings;
@property (readonly, nonatomic) BOOL useInMemoryStores;

+ (BOOL)supportsSecureCoding;
+ (id)unitTestingEnvironmentWithDataLocationName:(id)a0 schedulerProvider:(id)a1;
+ (id)inMemoryURL;
+ (id)unitTestingEnvironmentWithDataLocationName:(id)a0 schedulerProvider:(id)a1 loggerProvider:(id)a2;
+ (id)unitTestingEnvironmentWithDataLocationName:(id)a0;
+ (id)baseURLWithDataLocationName:(id)a0;
+ (id)currentEnvironment;
+ (id)unitTestingEnvironmentWithSchedulerProvider:(id)a0 loggerProvider:(id)a1;
+ (id)unitTestingEnvironment;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)makeCurrentEnvironment;
- (id)copyWithDelegateInfos:(id)a0;
- (void)setAddressBook:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSchedulerProvider:(id)a0 loggerProvider:(id)a1;

@end
