@class NSString, NSURL;

@interface PKAccountWebServiceFinancingPlansPaginatedRequest : PKAccountWebServicePaginatedRequest

@property (copy, nonatomic) NSString *accountIdentifier;
@property (retain, nonatomic) NSURL *baseURL;

- (void).cxx_destruct;
- (id)_urlRequestWithAppleAccountInformation:(id)a0;

@end
