@class NSString;

@interface CoreDAVSyncReportTask : CoreDAVPropertyFindBaseTask

@property (readonly, nonatomic) NSString *previousSyncToken;
@property (readonly, nonatomic) NSString *nextSyncToken;
@property (readonly, nonatomic) BOOL moreToSync;
@property (readonly, nonatomic) BOOL wasInvalidSyncToken;

- (id)notFoundHREFs;
- (id)initWithPropertiesToFind:(id)a0 atURL:(id)a1 withDepth:(int)a2 previousSyncToken:(id)a3;
- (id)httpMethod;
- (id)requestBody;
- (id)copyDefaultParserForContentType:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (BOOL)hadUnexpectedChangeOfSyncTokenWithZeroResponses;
- (void)finishCoreDAVTaskWithError:(id)a0;

@end
