@class SRDevice, NSString, NSDictionary, NSXPCConnection, SRDatastore, SRDaemonNotification;
@protocol SRSensorPrunerDelegate;

@interface SRSensorPruner : NSObject <SRDaemonNotificationDelegate> {
    SRDatastore *_datastore;
    SRDaemonNotification *_daemonNotification;
}

@property (copy) NSString *sensor;
@property (readonly, retain) SRDatastore *datastore;
@property (retain) NSDictionary *nextDatastoreFiles;
@property BOOL connectionDidInterrupt;
@property BOOL connectionDidInvalidate;
@property (retain) SRDevice *device;
@property (retain) NSXPCConnection *connection;
@property (weak) id<SRSensorPrunerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)remoteInterface;
+ (void)initialize;
+ (id)clientInterface;
+ (id)connectionToDaemon;
+ (void)removeAllSamplesForAllSensorsWithCompletionHandler:(id /* block */)a0;
+ (void)removeAllSamplesForAllSensorsWithConnection:(id)a0 completionHandler:(id /* block */)a1;

- (void)setupConnection;
- (void)daemonNotificationDaemonDidStart:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)resetDatastoreFiles:(id)a0;
- (void)removeAllSamples;
- (void)removeSamplesFrom:(double)a0 to:(double)a1 inSegment:(id)a2;
- (void)continuePruneFrom:(double)a0 to:(double)a1 withDatastoreFiles:(id)a2;
- (id)initWithSensor:(id)a0 device:(id)a1;
- (id)initWithSensor:(id)a0 xpcConnection:(id)a1 daemonNotification:(id)a2 device:(id)a3;
- (void)registerWithDaemonIfNeededWithReply:(id /* block */)a0;
- (void)removeSamplesFrom:(double)a0 to:(double)a1;

@end
