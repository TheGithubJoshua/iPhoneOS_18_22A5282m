@class NSArray;

@interface PARTopicRequest : PARRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *topics;
@property (nonatomic) double timeoutIntervalForRequest;
@property (readonly, retain) NSArray *localTopics;
@property (readonly, retain) NSArray *queryTopicContexts;

- (id)initWithCoder:(id)a0;
- (Class)responseClass;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (unsigned int)nwActivityLabel;

@end
