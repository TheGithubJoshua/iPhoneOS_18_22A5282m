@class NSDate;

@interface _CDContactStatistics : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property unsigned long long outgoingRecipientCount;
@property unsigned long long incomingSenderCount;
@property unsigned long long incomingRecipientCount;
@property (retain) NSDate *lastOutgoingRecipientDate;
@property (retain) NSDate *lastIncomingSenderDate;
@property (retain) NSDate *lastIncomingRecipientDate;
@property (retain) NSDate *firstOutgoingRecipientDate;
@property (retain) NSDate *firstIncomingSenderDate;
@property (retain) NSDate *firstIncomingRecipientDate;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)firstDate:(id)a0 updatedWith:(id)a1;
- (id)firstInteractionDate;
- (double)incomingRecipientTimeInterval;
- (double)incomingSenderTimeInterval;
- (unsigned long long)interactionCount;
- (double)interactionTimeInterval;
- (id)lastDate:(id)a0 updatedWith:(id)a1;
- (id)lastInteractionDate;
- (double)outgoingRecipientTimeInterval;
- (void)updateWithStatistics:(id)a0;

@end