@class NSString;

@interface WFHomeKitAccessResource : WFAccessResource <WFHomeManagerEventObserver>

@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isSystemResource;

- (void).cxx_destruct;
- (void)homeManagerDidUpdateHomes:(id)a0;
- (unsigned long long)status;
- (id)associatedAppIdentifier;
- (void)makeAvailableWithUserInterface:(id)a0 completionHandler:(id /* block */)a1;
- (id)protectedResourceDescription;

@end
