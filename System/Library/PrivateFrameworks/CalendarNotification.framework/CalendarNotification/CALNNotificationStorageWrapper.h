@class NSString;
@protocol CALNNotificationStorage;

@interface CALNNotificationStorageWrapper : NSObject <CALNNotificationStorage>

@property (retain) id<CALNNotificationStorage> wrappedStorage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeNotificationRecordsPassingTest:(id /* block */)a0;
- (void)addNotificationRecords:(id)a0;
- (void)addNotificationRecord:(id)a0;
- (void).cxx_destruct;
- (id)notificationRecords;
- (void)removeAllNotificationRecords;
- (id)initWithWrappedStorage:(id)a0;

@end
