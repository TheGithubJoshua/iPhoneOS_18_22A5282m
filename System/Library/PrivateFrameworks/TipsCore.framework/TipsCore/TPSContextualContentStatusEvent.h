@class NSString;

@interface TPSContextualContentStatusEvent : TPSContextualEvent

@property (nonatomic) long long statusType;
@property (copy, nonatomic) NSString *contentID;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithEventIdentifier:(id)a0 contentIdentifier:(id)a1 statusType:(long long)a2 status:(long long)a3;
- (unsigned int)minObservationCount;
- (void)updateStatusTypeIfOutOfBound;

@end
