@class NSString;
@protocol SGSuggestionsServiceURLsProtocol;

@interface PPConnectionsFoundInAppsSource : PPConnectionsSource <PPConnectionsLocationSource> {
    id<SGSuggestionsServiceURLsProtocol> _fiaURLService;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (id)initWithFoundInAppsService:(id)a0;
- (id)locationItemsWithCriteria:(id)a0 earliest:(id)a1 latest:(id)a2 limit:(unsigned long long)a3 consumer:(unsigned long long)a4 explanationSet:(id)a5;
- (void).cxx_destruct;
- (id)identifier;

@end
