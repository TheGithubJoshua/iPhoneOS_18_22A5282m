@class NSString, ATXProactiveSuggestion;

@interface APUIAppFallback : NSObject

@property (readonly, nonatomic) NSString *bundleId;
@property (readonly, nonatomic) ATXProactiveSuggestion *suggestion;

- (id)initWithProactiveSuggestion:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithBundleId:(id)a0;
- (BOOL)isEqualToAPUIAppFallback:(id)a0;

@end
