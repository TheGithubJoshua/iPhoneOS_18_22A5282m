@interface BookmarksDatabaseHealthReporter : NSObject {
    double _lastReportTimeInterval;
}

- (void)reportDatabaseHealth;
- (BOOL)_shouldReportDatabaseHealth;
- (id)_userDefaults;

@end
