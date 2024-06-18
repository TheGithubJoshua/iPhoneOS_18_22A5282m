@class NSString, NSURL, NSDate, CoreDAVResponseItem;

@interface CalDAVPostCalendarItemRecurrenceSplitTask : CoreDAVPropertyFindBaseTask

@property (retain, nonatomic) NSURL *postURLWithQuery;
@property (retain, nonatomic) CoreDAVResponseItem *updatedResponseItem;
@property (retain, nonatomic) CoreDAVResponseItem *createdResponseItem;
@property (retain, nonatomic) NSURL *resourceURL;
@property (retain, nonatomic) NSDate *recurrenceDate;
@property (retain, nonatomic) NSString *uidForCreatedSeries;
@property (retain, nonatomic) NSString *previousScheduleTag;
@property (retain, nonatomic) NSString *previousETag;
@property (nonatomic) BOOL isFloating;
@property (nonatomic) BOOL isAllDay;

- (id)createdICSData;
- (id)_recurrenceDateString;
- (id)createdScheduleTag;
- (id)httpMethod;
- (id)createdICSDocument;
- (id)requestBody;
- (id)url;
- (id)updatedScheduleTag;
- (id)additionalHeaderValues;
- (id)_etagForItem:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)urlWithQuery;
- (id)_documentForItem:(id)a0;
- (id)updatedICSDocument;
- (void)_updateBothResponseItems;
- (id)initWithResourceURL:(id)a0 recurrenceDate:(id)a1 floating:(BOOL)a2 allday:(BOOL)a3;
- (id)_scheduleTagForItem:(id)a0;
- (id)_dataForItem:(id)a0;
- (id)createdETag;
- (id)createdURL;
- (id)updatedETag;

@end
