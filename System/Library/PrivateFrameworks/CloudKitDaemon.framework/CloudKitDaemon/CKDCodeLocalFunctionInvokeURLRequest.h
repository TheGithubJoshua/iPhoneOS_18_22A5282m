@class NSString, NSData, NSURL;

@interface CKDCodeLocalFunctionInvokeURLRequest : CKDURLRequest

@property (copy, nonatomic) NSString *serviceName;
@property (copy, nonatomic) NSString *functionName;
@property (retain, nonatomic) NSData *serializedParameters;
@property (copy, nonatomic) NSURL *resolvedBaseURL;
@property (copy, nonatomic) id /* block */ serializedResultsCallback;

- (id)requestDidParseProtobufObject:(id)a0;
- (BOOL)requestGETPreAuth;
- (long long)databaseScope;
- (BOOL)parsingStandaloneMessage;
- (id)url;
- (id)additionalHeaderValues;
- (BOOL)allowsAnonymousAccount;
- (void).cxx_destruct;
- (void)requestDidParseNodeFailure:(id)a0;
- (long long)partitionType;
- (Class)expectedResponseClass;
- (id)initWithOperation:(id)a0 serviceName:(id)a1 functionName:(id)a2 serializedParameters:(id)a3 resolvedBaseURL:(id)a4;
- (void)prepareRequestOperationsForRequest:(id)a0;
- (id)requestBodyStream;
- (Class)requestMessageClass;
- (long long)serverType;
- (BOOL)shouldCompressBody;

@end
