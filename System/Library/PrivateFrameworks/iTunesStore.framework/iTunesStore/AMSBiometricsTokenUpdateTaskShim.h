@class NSNumber;

@interface AMSBiometricsTokenUpdateTaskShim : NSObject

@property (retain, nonatomic) NSNumber *accountIdentifier;

- (void).cxx_destruct;
- (id)initWithAccountIdentifier:(id)a0;
- (void)runUpdateWithCompletionBlock:(id /* block */)a0;

@end
