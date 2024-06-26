@class NSString, NSURL, NSDate;

@interface PKAccountWebServiceDocumentRequest : PKAccountWebServiceRequest

@property (copy, nonatomic) NSString *accountIdentifier;
@property (retain, nonatomic) NSURL *baseURL;
@property (copy, nonatomic) NSDate *beginDate;
@property (copy, nonatomic) NSDate *endDate;
@property (nonatomic) long long type;

- (void).cxx_destruct;
- (id)_urlRequestWithAppleAccountInformation:(id)a0;

@end
