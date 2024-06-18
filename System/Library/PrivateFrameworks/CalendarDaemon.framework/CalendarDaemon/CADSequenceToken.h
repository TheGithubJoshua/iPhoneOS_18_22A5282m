@class NSDictionary;

@interface CADSequenceToken : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *allDBSequenceMap;

- (id)initWithCoder:(id)a0;
- (id)initWithMainDBSequence:(int)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)serializedSequenceString;
- (int)sequenceForDatabaseID:(int)a0;
- (id)initWithSerializedSequenceString:(id)a0;
- (int)mainDBSequence;
- (id)initWithAllDBSequenceMap:(id)a0;

@end
