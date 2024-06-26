@class ATXInfoTimelineEntryRelevance, NSDate;

@interface ATXInfoTimelineEntry : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) ATXInfoTimelineEntryRelevance *relevance;
@property (readonly, nonatomic) BOOL isImportantRelativeToTimeline;

+ (id)entryWithDate:(id)a0 relevance:(id)a1;
+ (id)entryWithDate:(id)a0 importantRelativeToTimeline:(BOOL)a1;

- (id)initWithCoder:(id)a0;
- (id)init;
- (BOOL)checkAndReportDecodingFailureIfNeededForid:(id)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (id)initWithDate:(id)a0 relevance:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithDate:(id)a0 importantRelativeToTimeline:(BOOL)a1;

@end
