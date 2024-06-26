@interface RTSourceMapsSupportHistoryEntryRoute : RTSourceMapsSupportHistoryEntry

@property (readonly, nonatomic) BOOL navigationWasInterrupted;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithUsageDate:(id)a0 navigationWasInterrupted:(BOOL)a1;

@end
