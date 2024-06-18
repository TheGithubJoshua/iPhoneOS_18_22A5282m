@interface FitnessCoachingServices.TypicalDayProvider : NSObject <FITypicalDayActivityModelDelegate> {
    void /* unknown type, empty encoding */ dataSource;
    void /* unknown type, empty encoding */ state;
}

- (id)currentCalendar;
- (id)firstOnWristDateToday;
- (id)currentDate;
- (BOOL)enumerateActivitySummariesFromDateComponents:(id)a0 toDateComponents:(id)a1 error:(id *)a2 handler:(id /* block */)a3;
- (id)init;
- (void).cxx_destruct;

@end
