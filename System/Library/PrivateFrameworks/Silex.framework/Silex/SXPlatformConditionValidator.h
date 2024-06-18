@class NSString;

@interface SXPlatformConditionValidator : NSObject <SXConditionValidating>

@property (readonly, copy, nonatomic) NSString *platform;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithPlatform:(id)a0;
- (BOOL)validateCondition:(id)a0 context:(id)a1;

@end
