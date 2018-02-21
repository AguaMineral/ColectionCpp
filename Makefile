.PHONY: clean All

All:
	@echo "----------Building project:[ const_key_word - Debug ]----------"
	@cd "const_key_word" && "$(MAKE)" -f  "const_key_word.mk"
clean:
	@echo "----------Cleaning project:[ const_key_word - Debug ]----------"
	@cd "const_key_word" && "$(MAKE)" -f  "const_key_word.mk" clean
