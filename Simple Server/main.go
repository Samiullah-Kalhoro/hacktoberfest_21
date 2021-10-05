package main

import (
	"fmt"
	"html"
	"log"
	"net/http"
)

func helloHandler(w http.ResponseWriter, r *http.Request) {
	fmt.Fprintf(w, "Hey There")
}

func HacktoberFestHandler(w http.ResponseWriter, r *http.Request) {
	fmt.Fprintf(w, "Welcome to HacktoberFest!")
}

func nameHandler(w http.ResponseWriter, r *http.Request) {
	fmt.Fprintf(w, "Hello, %q", html.EscapeString(r.URL.Path))
}
	
func main() {
	http.HandleFunc("/", nameHandler)

	http.HandleFunc("/hi", helloHandler)
	http.HandleFunc("/HacktoberFest", HacktoberFestHandler)

	log.Fatal(http.ListenAndServe(":8080", nil))
}
