@class NSString;

@interface _bmFMStatement : NSObject

@property long long useCount;
@property (retain) NSString *query;
@property void *statement;
@property BOOL inUse;

- (void).cxx_destruct;
- (id)description;
- (void)dealloc;
- (void)reset;
- (void)close;

@end
