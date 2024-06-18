@class NSString, NSBundle;

@interface PKODIServiceProviderAssessment : PKODIAssessment {
    NSBundle *_bundleIdentifier;
    NSBundle *_locationBundle;
}

@property (copy, nonatomic) NSString *serviceIdentifier;

- (void).cxx_destruct;
- (id)description;
- (void)createODISession;
- (void)getAssessmentWithCompletion:(id /* block */)a0;
- (id)initWithServiceProviderIdentifier:(id)a0 locationBundle:(id)a1;

@end
