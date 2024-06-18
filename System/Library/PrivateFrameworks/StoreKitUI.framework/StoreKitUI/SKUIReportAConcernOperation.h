@class SKUIReportAConcernMetadata, NSDictionary;

@interface SKUIReportAConcernOperation : ISOperation

@property (retain, nonatomic) SKUIReportAConcernMetadata *metadata;
@property (copy) NSDictionary *responseDictionary;

- (void).cxx_destruct;
- (void)run;
- (id)initWithMetadata:(id)a0;
- (id)_httpBody;

@end
