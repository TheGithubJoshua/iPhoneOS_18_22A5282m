@class NSManagedObjectContext, NSPersistentStoreCoordinator;

@interface ICNotesCrossProcessChangeCoordinator : NSObject

@property (retain, nonatomic) NSPersistentStoreCoordinator *sourceCoordinator;
@property (retain, nonatomic) NSManagedObjectContext *destinationContext;

- (void)postAccountDidChangeNotification;
- (void)postEditorExtensionDidSaveNotification;
- (void)registerForAccountNotifications;
- (id)initWithSourceCoordinator:(id)a0 destinationContext:(id)a1;
- (void).cxx_destruct;
- (void)registerForCrossProcessNotificationName:(id)a0 block:(id /* block */)a1;
- (void)registerForPasswordStatusDidChangeNotifications;
- (void)postCrossProcessNotificationName:(id)a0;
- (void)dealloc;
- (void)registerForEditorExtensionDidSaveNotificationWithBlock:(id /* block */)a0;
- (void)postNotesPasswordStatusDidChangeNotification;

@end
