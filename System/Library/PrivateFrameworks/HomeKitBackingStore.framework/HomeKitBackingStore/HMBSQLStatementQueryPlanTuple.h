@class NSString;

@interface HMBSQLStatementQueryPlanTuple : HMFObject

@property (readonly, nonatomic) int row;
@property (readonly, nonatomic) int parent;
@property (readonly, nonatomic) NSString *detail;

- (id)initWithRow:(id)a0;
- (void).cxx_destruct;
- (id)attributeDescriptions;

@end
