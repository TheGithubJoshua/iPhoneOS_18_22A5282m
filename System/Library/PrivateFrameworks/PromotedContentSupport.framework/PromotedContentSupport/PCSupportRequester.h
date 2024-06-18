@interface PCSupportRequester : APXPCActionRequester

+ (id)machService;
+ (BOOL)canShareConnection;

- (void)connectionInterrupted;
- (id)init;
- (void)connectionInvalidated;
- (void)fetchGenderAndAgeGroupData:(id /* block */)a0;
- (id)remoteObjectInterface;
- (void)policiesForContainerType:(id)a0 adType:(id)a1 adFormatType:(id)a2 completion:(id /* block */)a3;
- (void)policiesToEnforce:(id /* block */)a0;
- (void)addClientToSegments:(id)a0 replaceExisting:(BOOL)a1 privateSegment:(BOOL)a2;
- (id)fetchGenderAndAgeGroupData;
- (void)fetchConfigurationForClass:(Class)a0 completion:(id /* block */)a1;

@end
