@class NSString, AFAnalyticsEvent, NSDate;

@interface AFAnalyticsEventRecord : NSObject <SiriCoreSQLiteRecord, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *recordId;
@property (readonly, copy, nonatomic) AFAnalyticsEvent *event;
@property (readonly, copy, nonatomic) NSString *streamUID;
@property (readonly, copy, nonatomic) NSDate *dateCreated;
@property (readonly, copy, nonatomic) NSString *speechId;

- (id)initWithCoder:(id)a0;
- (id)initWithEvent:(id)a0 streamUID:(id)a1 dateCreated:(id)a2 speechId:(id)a3 recordId:(id)a4;
- (void)siriCoreSQLiteRecord_enumerateColumnNamesAndValuesUsingBlock:(id /* block */)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithEvent:(id)a0 streamUID:(id)a1 dateCreated:(id)a2 speechId:(id)a3;

@end
