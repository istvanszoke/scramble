all:
	@$(MAKE) -s src
	@$(MAKE) -s tst
src:
	@cd ./source/ && $(MAKE) -s
tst:
	@cd ./test/ && $(MAKE) -s
clean:
	@cd ./source/ && $(MAKE) -s clean
	@cd ./test/ && $(MAKE) -s clean
