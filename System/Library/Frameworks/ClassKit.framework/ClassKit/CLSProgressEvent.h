@class CLSRange, NSString, CLSActivityReportItem, CLSTimeInterval;

@interface CLSProgressEvent : CLSInsightEvent

@property (copy, nonatomic) NSString *attachmentID;
@property (copy, nonatomic) NSString *classID;
@property (copy, nonatomic) NSString *handoutID;
@property (copy, nonatomic) NSString *recipientPersonID;
@property (nonatomic) int handoutAttachmentType;
@property (nonatomic) long long contextType;
@property (copy, nonatomic) NSString *objectIDPath;
@property (copy, nonatomic) NSString *handoutAuthorizedObjectID;
@property (copy, nonatomic) CLSActivityReportItem *activityItemInfo;
@property (copy, nonatomic) CLSRange *rangeInfo;
@property (retain, nonatomic) CLSTimeInterval *timeIntervalInfo;
@property (copy, nonatomic) NSString *primaryActivityItemIdentifier;
@property (copy, nonatomic) NSString *appIdentifier;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)setAppIdentifier:(id)a0;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (void)mergeWithObject:(id)a0;
- (BOOL)validateObject:(id *)a0;
- (id)initWithAttachmentID:(id)a0 classID:(id)a1 handoutID:(id)a2 eventType:(long long)a3;

@end
