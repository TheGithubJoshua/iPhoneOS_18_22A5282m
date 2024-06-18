@class NSSet, CoreDAVMultiStatusItem;

@interface CoreDAVPropertyFindBaseTask : CoreDAVTask

@property (retain, nonatomic) NSSet *propertiesToFind;
@property (retain, nonatomic) CoreDAVMultiStatusItem *multiStatus;

- (id)getTotalFailureError;
- (id)parseHints;
- (id)successfulValueForNameSpace:(id)a0 elementName:(id)a1;
- (void)updateMultiStatusFromResponse;
- (id)copyDefaultParserForContentType:(id)a0;
- (id)additionalHeaderValues;
- (void).cxx_destruct;
- (id)description;
- (id)initWithPropertiesToFind:(id)a0 atURL:(id)a1;
- (void)finishCoreDAVTaskWithError:(id)a0;

@end
