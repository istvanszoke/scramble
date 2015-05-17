all:
	@$(MAKE) -s src
	@$(MAKE) -s tst
src:
	@cd ./src/ && $(MAKE) -s
tst:
	@cd ./test/ && $(MAKE) -s
clean:
	@cd ./src/ && $(MAKE) -s clean
	@cd ./test/ && $(MAKE) -s clean
