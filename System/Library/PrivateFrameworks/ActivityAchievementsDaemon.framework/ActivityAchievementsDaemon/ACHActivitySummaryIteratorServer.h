@class NSString, HDActivitySummaryBuilder, NSCalendar;

@interface ACHActivitySummaryIteratorServer : HDStandardTaskServer <ACHActivitySummaryIteratorServerInterface> {
    HDActivitySummaryBuilder *_builder;
    NSCalendar *_calendar;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)taskIdentifier;

- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (void)connectionInvalidated;
- (void)remote_activitySummariesForStartDateComponents:(id)a0 endDateComponents:(id)a1 includePrivateProperties:(BOOL)a2 completion:(id /* block */)a3;
- (id)remoteInterface;
- (void).cxx_destruct;
- (id)exportedInterface;

@end
