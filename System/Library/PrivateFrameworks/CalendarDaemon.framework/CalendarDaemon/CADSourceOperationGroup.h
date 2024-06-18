@interface CADSourceOperationGroup : CADOperationGroup <CADSourceInterface>

+ (BOOL)requiresEventAccess;

- (void)CADRemoveCalendarItemsOlderThanDate:(id)a0 ofType:(int)a1 inSource:(id)a2 reply:(id /* block */)a3;
- (void)CADDatabaseGetLocalSourceWithEnableIfNeeded:(BOOL)a0 reply:(id /* block */)a1;
- (void)CADSourceRemoveExchangeDelegateWithID:(id)a0 reply:(id /* block */)a1;
- (void)CADSourceRefresh:(id)a0 isUserRequested:(BOOL)a1 reply:(id /* block */)a2;
- (void)CADSourceAddExchangeDelegateWithName:(id)a0 emailAddress:(id)a1 toSourceWithID:(id)a2 reply:(id /* block */)a3;
- (void)CADSourceGetNotificationCollection:(id)a0 reply:(id /* block */)a1;
- (void)CADCountCalendarItemsOfType:(int)a0 inSource:(id)a1 reply:(id /* block */)a2;
- (void)CADSourceGetGrantedDelegatesList:(id)a0 reply:(id /* block */)a1;
- (int)_tryPerformBlockWithSourceID:(id)a0 forAction:(unsigned long long)a1 withBlock:(id /* block */)a2;
- (void)CADDatabaseGetSourcesWithFaultedProperties:(id)a0 reply:(id /* block */)a1;
- (void)CADSourceGetConstraints:(id)a0 reply:(id /* block */)a1;
- (void)CADSourceUpdateGrantedDelegate:(id)a0 action:(long long)a1 sourceID:(id)a2 reply:(id /* block */)a3;
- (void)CADDatabaseGetLocalBirthdaySource:(id /* block */)a0;
- (int)_tryPerformBlockWithSourceID:(id)a0 forAction:(unsigned long long)a1 entityType:(int)a2 withBlock:(id /* block */)a3;

@end
